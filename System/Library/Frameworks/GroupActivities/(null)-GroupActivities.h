//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GroupActivities/CPConnectionProviding-Protocol.h>
#import <GroupActivities/CPLinkDelegate-Protocol.h>
#import <GroupActivities/CPParticipantDelegate-Protocol.h>

@interface (null) (GroupActivities) <CPConnectionProviding, CPLinkDelegate, CPParticipantDelegate>
- (void)requestConnectionObjectForRemoteParticipantSync:(id)arg1 linkType:(unsigned char)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006db90
- (void)didBecomeReady:(id)arg1;	// IMP=0x000000000006dd10
- (void)didReceiveData:(id)arg1 from:(id)arg2;	// IMP=0x000000000006dc90
- (void)didFailWithError:(id)arg1;	// IMP=0x000000000006dc30
- (void)didReceiveData:(id)arg1 ofType:(unsigned char)arg2 from:(id)arg3;	// IMP=0x000000000006de90
- (void)participant:(id)arg1 didBecomeAvailable:(_Bool)arg2;	// IMP=0x000000000006dd30
@end

