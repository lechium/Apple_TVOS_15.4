//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary, NSString, VCMoments;

@protocol VCMomentTransportDelegate <NSObject>
- (void)moments:(VCMoments *)arg1 shouldProcessRequest:(NSDictionary *)arg2 recipientID:(NSString *)arg3;
@end

