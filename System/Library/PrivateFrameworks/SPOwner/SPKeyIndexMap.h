//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface SPKeyIndexMap : NSObject
{
    CDStruct_e66c82b6 *_mapHandle;	// 8 = 0x8
    unsigned char _sequence;	// 16 = 0x10
    NSUUID *_beaconIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002996b
@property(readonly) CDStruct_e66c82b6 *mapHandle; // @synthesize mapHandle=_mapHandle;
@property(readonly) unsigned char sequence; // @synthesize sequence=_sequence;
@property(readonly) NSUUID *beaconIdentifier; // @synthesize beaconIdentifier=_beaconIdentifier;
- (id)headerString;	// IMP=0x00000000000298b0
- (id)initWithBeaconIdentifier:(id)arg1 keySequence:(unsigned char)arg2 mapHandle:(CDStruct_e66c82b6 *)arg3;	// IMP=0x000000000002982f
- (void)dealloc;	// IMP=0x00000000000297f5
- (id)init;	// IMP=0x00000000000297ca

@end

