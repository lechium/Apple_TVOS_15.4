//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, TVNPOutputDeviceRoute;

@interface TVNPGroupedRoute
{
    TVNPOutputDeviceRoute *_leader;	// 96 = 0x60
    NSArray *_members;	// 104 = 0x68
}

+ (id)_titleForGroupWithMembers:(id)arg1 leader:(id)arg2;	// IMP=0x000000000001e870
- (void).cxx_destruct;	// IMP=0x000000000001f010
@property(readonly, nonatomic) NSArray *members; // @synthesize members=_members;
@property(readonly, nonatomic) TVNPOutputDeviceRoute *leader; // @synthesize leader=_leader;
- (id)_imageForGroupWithMembers:(id)arg1 leader:(id)arg2;	// IMP=0x000000000001ec20
- (id)deviceImage;	// IMP=0x000000000001e790
- (void)updateWithGroupLeader:(id)arg1 members:(id)arg2;	// IMP=0x000000000001e440
- (id)init;	// IMP=0x000000000001e3c0

@end

