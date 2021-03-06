//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFOfflineCacheReplayContextTransformation-Protocol.h>

@class NSString;

@interface _MFTranslateTemporaryIDReplayContextTransformation : NSObject <MFOfflineCacheReplayContextTransformation>
{
    NSString *_temporaryID;	// 8 = 0x8
    NSString *_translatedID;	// 16 = 0x10
}

- (void)applyToReplayContext:(id)arg1;	// IMP=0x00000000000ae2a4
- (void)dealloc;	// IMP=0x00000000000ae25a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ae1f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ae13f
- (id)initWithTemporaryID:(id)arg1 translatedID:(id)arg2;	// IMP=0x00000000000ae0d6

@end

