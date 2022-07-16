//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject
{
    NSMutableArray *_splitterDeviceList;	// 8 = 0x8
    _Bool _splitterEnabled;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000bef9d
@property(nonatomic) _Bool splitterEnabled; // @synthesize splitterEnabled=_splitterEnabled;
- (_Bool)_hasDeviceTemporaryPairedNotInContacts;	// IMP=0x00100000000bee07
@property(readonly, nonatomic) _Bool shouldDisableSpeakerVerificationInSplitterMode;
- (unsigned long long)splitterState;	// IMP=0x00100000000bec59
- (void)addDeviceIntoSplitterDeviceList:(id)arg1;	// IMP=0x00100000000bec3c
- (id)splitterDeviceList;	// IMP=0x00100000000bec1e
- (id)description;	// IMP=0x00100000000be9cd
- (id)init;	// IMP=0x00100000000be967

@end

