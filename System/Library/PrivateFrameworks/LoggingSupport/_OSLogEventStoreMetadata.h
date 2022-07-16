//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, _OSLogEventStoreTimeRef;

__attribute__((visibility("hidden")))
@interface _OSLogEventStoreMetadata : NSObject
{
    _OSLogEventStoreTimeRef *_ttls[5];	// 8 = 0x8
    _OSLogEventStoreTimeRef *_oldestPersist;	// 48 = 0x30
    _OSLogEventStoreTimeRef *_oldestSpecial;	// 56 = 0x38
    _OSLogEventStoreTimeRef *_oldestSignpost;	// 64 = 0x40
    _OSLogEventStoreTimeRef *_oldestHighVolume;	// 72 = 0x48
    _OSLogEventStoreTimeRef *_oldestLive;	// 80 = 0x50
    _OSLogEventStoreTimeRef *_end;	// 88 = 0x58
    NSUUID *_archiveUUID;	// 96 = 0x60
    NSUUID *_sourceUUID;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000048346
@property(readonly, nonatomic) NSUUID *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
@property(readonly, nonatomic) NSUUID *archiveUUID; // @synthesize archiveUUID=_archiveUUID;
@property(readonly, nonatomic) _OSLogEventStoreTimeRef *end; // @synthesize end=_end;
@property(readonly, nonatomic) _OSLogEventStoreTimeRef *oldestLive; // @synthesize oldestLive=_oldestLive;
@property(readonly, nonatomic) _OSLogEventStoreTimeRef *oldestHighVolume; // @synthesize oldestHighVolume=_oldestHighVolume;
@property(readonly, nonatomic) _OSLogEventStoreTimeRef *oldestSignpost; // @synthesize oldestSignpost=_oldestSignpost;
@property(readonly, nonatomic) _OSLogEventStoreTimeRef *oldestSpecial; // @synthesize oldestSpecial=_oldestSpecial;
@property(readonly, nonatomic) _OSLogEventStoreTimeRef *oldestPersist; // @synthesize oldestPersist=_oldestPersist;
- (id)timeRefForTTLClass:(unsigned char)arg1;	// IMP=0x0000000000048312
- (id)initWithCollection:(id)arg1 localStorePlist:(id)arg2 liveDataDescriptor:(int)arg3;	// IMP=0x0000000000048050
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000047a82

@end

