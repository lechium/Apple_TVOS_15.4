//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface HMCameraClipEncryptionManager : NSObject
{
    NSData *_key;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002064b6
@property(readonly, copy) NSData *key; // @synthesize key=_key;
- (id)encryptedDataContextFromData:(id)arg1;	// IMP=0x0000000000206091
- (id)initWithKey:(id)arg1;	// IMP=0x0000000000205fef
- (id)init;	// IMP=0x0000000000205f90

@end

