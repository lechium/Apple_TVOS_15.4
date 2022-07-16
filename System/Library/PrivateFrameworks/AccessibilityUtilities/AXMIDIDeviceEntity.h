//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXMIDIDevice, NSMutableSet, NSNumber, NSString;

@interface AXMIDIDeviceEntity : NSObject
{
    unsigned int _midiEntity;	// 8 = 0x8
    AXMIDIDevice *_device;	// 16 = 0x10
    NSMutableSet *_sources;	// 24 = 0x18
    NSMutableSet *_destinations;	// 32 = 0x20
    NSNumber *_supportsMMC;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a2b1c
@property(nonatomic) unsigned int midiEntity; // @synthesize midiEntity=_midiEntity;
@property(readonly, nonatomic) NSNumber *supportsMMC; // @synthesize supportsMMC=_supportsMMC;
@property(retain, nonatomic) NSMutableSet *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) NSMutableSet *sources; // @synthesize sources=_sources;
@property(nonatomic) __weak AXMIDIDevice *device; // @synthesize device=_device;
- (id)_destinationForMidiEndpoint:(unsigned int)arg1 addIfNeeded:(_Bool)arg2;	// IMP=0x00000000000a281c
- (id)_sourceForMidiEndpoint:(unsigned int)arg1 addIfNeeded:(_Bool)arg2;	// IMP=0x00000000000a2595
- (void)removeMidiDestination:(unsigned int)arg1;	// IMP=0x00000000000a245f
- (void)addMidiDestination:(unsigned int)arg1;	// IMP=0x00000000000a243f
- (void)removeMidiSource:(unsigned int)arg1;	// IMP=0x00000000000a2309
- (void)addMidiSource:(unsigned int)arg1;	// IMP=0x00000000000a22e9
- (void)resetAndDetectEndpoints;	// IMP=0x00000000000a2247
- (id)supportsGeneralMMC;	// IMP=0x00000000000a2229
@property(readonly, nonatomic) NSNumber *supportsGeneralMIDI;
@property(readonly, nonatomic) NSString *driverName;
@property(readonly, nonatomic) NSNumber *isPrivate;
@property(readonly, nonatomic) NSNumber *isOffline;
@property(readonly, nonatomic) NSNumber *isBroadcast;
@property(readonly, nonatomic) NSNumber *isEmbedded;
@property(readonly, nonatomic) NSNumber *deviceID;
@property(readonly, nonatomic) NSNumber *uniqueID;
@property(readonly, nonatomic) NSString *name;
- (id)description;	// IMP=0x00000000000a20aa
- (id)initWithMIDIEntity:(unsigned int)arg1 device:(id)arg2;	// IMP=0x00000000000a1fde

@end
