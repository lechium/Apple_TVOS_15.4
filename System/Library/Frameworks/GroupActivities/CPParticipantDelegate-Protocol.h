//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GroupActivities/NSObject-Protocol.h>

@class CPParticipant, NSData;

@protocol CPParticipantDelegate <NSObject>
- (void)didReceiveData:(NSData *)arg1 ofType:(unsigned char)arg2 from:(CPParticipant *)arg3;
- (void)participant:(CPParticipant *)arg1 didBecomeAvailable:(_Bool)arg2;
@end

