//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSArray, NSString;

@interface SARemotePlaybackDeviceList <SABackgroundContextObject>
{
}

+ (id)remotePlaybackDeviceListWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000004026a
+ (id)remotePlaybackDeviceList;	// IMP=0x0000000000040258
@property(copy, nonatomic) NSArray *remotePlaybackDevices;
- (id)encodedClassName;	// IMP=0x000000000004024b
- (id)groupIdentifier;	// IMP=0x0000000000040237

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
