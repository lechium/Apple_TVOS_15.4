//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _PFWeakReference;

__attribute__((visibility("hidden")))
@interface _NSQueryGenerationToken
{
    NSString *_storeIdentifier;	// 8 = 0x8
    _PFWeakReference *_store;	// 16 = 0x10
    id _generationIdentifier;	// 24 = 0x18
    struct _queryGenerationFlags {
        unsigned int _isCompound:1;
        unsigned int _isSingleton:1;
        unsigned int _freeValueOnDealloc:1;
        unsigned int _isUnmoored:1;
        unsigned int _reservedFlags:12;
    } _flags;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d740b
- (id)persistentStoreCoordinator;	// IMP=0x00000000000d8a65
- (id)description;	// IMP=0x00000000000d7d95
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d7cd6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d7a32
- (id)autorelease;	// IMP=0x00000000000d79f6
- (oneway void)release;	// IMP=0x00000000000d79ba
- (id)retain;	// IMP=0x00000000000d797e
- (void)dealloc;	// IMP=0x00000000000d7784
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d764b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d7413

@end

