//
//  FileDownloadObject.h
//  BTSDemo
//
//  Created by A's macAir on 4/30/15.
//  Copyright (c) 2015 Abdoulaye Diallo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FileDownloadObject : NSObject
@property(nonatomic,strong) NSString *titleOfTheFile;
@property(nonatomic, strong) NSString * sourceInfo;
@property(nonatomic,strong) NSURLSessionDownloadTask *downloadTask;
@property(nonatomic,strong) NSData * taskResumeData;
@property(nonatomic)  double  downloadProgress;
@property(nonatomic) BOOL isDownloading;
@property(nonatomic) BOOL downloadComplete;
@property(nonatomic) unsigned long taskIdentifier;
-(id) initWithFileTitle:(NSString*) title  andSourceInfo:(NSString*) sourceInfo;

@end
