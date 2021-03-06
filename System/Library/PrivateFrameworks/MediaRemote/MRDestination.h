//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class MRAVEndpoint, MRClient, MROrigin, MRPlayer, MRPlayerPath, NSString;

@interface MRDestination : NSObject <NSCopying>
{
    NSString *_outputDeviceUID;	// 8 = 0x8
    MRAVEndpoint *_endpoint;	// 16 = 0x10
    MRPlayerPath *_playerPath;	// 24 = 0x18
}

+ (id)localDestination;	// IMP=0x00000000001a50a9
+ (id)userSelectedDestination;	// IMP=0x00000000001a5079
+ (id)proactiveDestination;	// IMP=0x00000000001a5049
- (void).cxx_destruct;	// IMP=0x00000000001a5a56
@property(copy, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) MRAVEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
@property(readonly, nonatomic) _Bool isUserSelected;
@property(readonly, nonatomic) _Bool isProactive;
@property(readonly, nonatomic) _Bool isLocal;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a5875
- (id)description;	// IMP=0x00000000001a575d
- (void)populatePlayerPathIfNeeded;	// IMP=0x00000000001a56f9
@property(copy, nonatomic) MRPlayer *player;
@property(copy, nonatomic) MRClient *client;
@property(retain, nonatomic) MROrigin *origin;
- (id)_init;	// IMP=0x00000000001a53e8
- (id)initWithOutputDeviceUID:(id)arg1;	// IMP=0x00000000001a534a
- (id)initWithEndpoint:(id)arg1;	// IMP=0x00000000001a520f
- (id)initWithOrigin:(id)arg1;	// IMP=0x00000000001a516c
- (id)initWithPlayerPath:(id)arg1;	// IMP=0x00000000001a50e6

@end

