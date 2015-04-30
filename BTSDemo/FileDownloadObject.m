//
//  FileDownloadObject.m
//  BTSDemo
//
//  Created by A's macAir on 4/30/15.
//  Copyright (c) 2015 Abdoulaye Diallo. All rights reserved.
//

#import "FileDownloadObject.h"

@implementation FileDownloadObject


-(id)initWithFileTitle:(NSString *)title andSourceInfo:(NSString *)sourceInfo{
    
    self=[super init];
    if(self){
        
        self.titleOfTheFile=title;
        self.sourceInfo=sourceInfo;
        self.taskIdentifier=-1;
        self.downloadComplete=NO;
        self.isDownloading=NO;
        self.downloadProgress=0.0;
    }
    return self;
}

@end
