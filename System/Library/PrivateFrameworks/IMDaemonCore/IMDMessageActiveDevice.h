//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMDMessageActiveDevice : NSObject
{
    _Bool _hasReceivedReadReceipt;	// 8 = 0x8
    NSString *_idsDestination;	// 16 = 0x10
    NSDate *_latestActiveDate;	// 24 = 0x18
    NSDate *_latestReadReceipt;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000152c1
@property(retain, nonatomic) NSDate *latestReadReceipt; // @synthesize latestReadReceipt=_latestReadReceipt;
@property(nonatomic) _Bool hasReceivedReadReceipt; // @synthesize hasReceivedReadReceipt=_hasReceivedReadReceipt;
@property(retain, nonatomic) NSDate *latestActiveDate; // @synthesize latestActiveDate=_latestActiveDate;
@property(retain, nonatomic) NSString *idsDestination; // @synthesize idsDestination=_idsDestination;
- (id)description;	// IMP=0x00000000000151c9
- (_Bool)shouldDisplayRemoteDecryptionFailure;	// IMP=0x0000000000015165
- (_Bool)shouldDisplayAttachmentDownloadFailure;	// IMP=0x0000000000015101
- (_Bool)shouldSendTypingIndicator;	// IMP=0x000000000001508e
- (_Bool)_hasReceivedReadReceiptRecently;	// IMP=0x0000000000015014
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014f7c
- (id)initWithIDSDestination:(id)arg1 latestDate:(id)arg2 latestReadReceiptDate:(id)arg3 hasReceivedReadReceipt:(_Bool)arg4;	// IMP=0x0000000000014e78

@end

