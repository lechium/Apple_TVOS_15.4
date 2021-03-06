//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROIOElement.h>

@class NSString;

@interface MSCRODIOBluetoothElement : SCROIOElement
{
    NSString *_bluetoothAddress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000006c83
- (id)bluetoothAddress;	// IMP=0x0010000000006c6e
- (int)transport;	// IMP=0x0010000000006c63
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000006bd1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000006b7b
@property(readonly) unsigned long long hash;
- (id)initWithAddress:(id)arg1;	// IMP=0x0010000000006aa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

