//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSharedConfidenceScoreMutating-Protocol.h>

@class AFSharedConfidenceScore, NSString;

@interface _AFSharedConfidenceScoreMutation : NSObject <AFSharedConfidenceScoreMutating>
{
    AFSharedConfidenceScore *_baseModel;	// 8 = 0x8
    NSString *_sharedUserId;	// 16 = 0x10
    unsigned long long _confidenceScore;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasSharedUserId:1;
        unsigned int hasConfidenceScore:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000140f82
- (id)generate;	// IMP=0x0000000000140e99
- (void)setConfidenceScore:(unsigned long long)arg1;	// IMP=0x0000000000140e8b
- (void)setSharedUserId:(id)arg1;	// IMP=0x0000000000140e6b
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000140e00
- (id)init;	// IMP=0x0000000000140dec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

