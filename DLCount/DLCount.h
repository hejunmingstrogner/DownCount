//
//  downLoadParser.h
//  iShow
//
//  Created by 何俊明 on 2016/12/6.
//  Copyright © 2016年 何俊明. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol dwDelegate <NSObject>

-(void)receiveDwProgress:(CGFloat)progress;
-(void)receiveDwFailDownLoad;
-(void)receiveDwunZip:(NSString *)unZipPath;
-(void)receiveDwFailUnZip;
@end

@interface downLoadParser : NSObject

@property (nonatomic , strong) NSMutableDictionary * dwingDict;         //  下载管理器
@property (nonatomic , strong) NSFileManager       * fm;                //  文件管理对象

+(void)addDownload:(UIViewController <dwDelegate> *)vc TaskUrl:(NSString *)urlString;
-(void)startDownLoadUrl:(NSString *)urlString WithObject:(UIViewController<dwDelegate> *)vc;

@end
