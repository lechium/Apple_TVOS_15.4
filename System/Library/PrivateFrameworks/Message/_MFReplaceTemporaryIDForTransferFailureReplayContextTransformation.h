//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFOfflineCacheReplayContextTransformation-Protocol.h>

@class NSString;

@interface _MFReplaceTemporaryIDForTransferFailureReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation>
{
    NSString *_temporaryID;	// 8 = 0x8
    NSString *_newTemporaryID;	// 16 = 0x10
}

- (void)applyToReplayContext:(id)arg1;	// IMP=0x00000000000ae6b2
- (void)dealloc;	// IMP=0x00000000000ae668
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ae5fe
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ae54d
- (id)initWithTemporaryID:(id)arg1 newTemporaryID:(id)arg2;	// IMP=0x00000000000ae4e4

@end

