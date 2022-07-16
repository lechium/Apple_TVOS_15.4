//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKit/NSObject-Protocol.h>
#import <ActionKit/WFNaming-Protocol.h>

@class NSDate, NSNumber, NSString, WFFileType;
@protocol WFRemoteFile;

@protocol WFRemoteFile <WFNaming, NSObject>
- (_Bool)wfIsEqualToFile:(id <WFRemoteFile>)arg1;
- (WFFileType *)wfFileType;
- (NSDate *)wfLastModifiedDate;
- (NSNumber *)wfFileSize;
- (NSString *)wfPath;
- (_Bool)wfIsDirectory;
@end

