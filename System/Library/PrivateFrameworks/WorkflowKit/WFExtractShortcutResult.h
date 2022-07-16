//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, WFWorkflowRecord;

@interface WFExtractShortcutResult : NSObject
{
    WFWorkflowRecord *_record;	// 8 = 0x8
    long long _fileContentType;	// 16 = 0x10
    NSDate *_sharedDate;	// 24 = 0x18
    NSString *_iCloudIdentifier;	// 32 = 0x20
    NSString *_sourceApplicationIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d98ae
@property(readonly, copy, nonatomic) NSString *sourceApplicationIdentifier; // @synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier;
@property(readonly, copy, nonatomic) NSString *iCloudIdentifier; // @synthesize iCloudIdentifier=_iCloudIdentifier;
@property(readonly, nonatomic) NSDate *sharedDate; // @synthesize sharedDate=_sharedDate;
@property(readonly, nonatomic) long long fileContentType; // @synthesize fileContentType=_fileContentType;
@property(readonly, nonatomic) WFWorkflowRecord *record; // @synthesize record=_record;
- (id)initWithRecord:(id)arg1 fileContentType:(long long)arg2 iCloudIdentifier:(id)arg3 sourceApplicationIdentifier:(id)arg4 sharedDate:(id)arg5;	// IMP=0x00000000000d9762
- (id)initWithRecord:(id)arg1 fileContentType:(long long)arg2 sourceApplicationIdentifier:(id)arg3 sharedDate:(id)arg4;	// IMP=0x00000000000d973a

@end

