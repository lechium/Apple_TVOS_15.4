//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IDSRapportClient, NSDictionary, NSString;

@protocol IDSRapportClientDelegate <NSObject>

@optional
- (void)rapportClient:(IDSRapportClient *)arg1 didReceiveMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3;
- (void)rapportClient:(IDSRapportClient *)arg1 didLoseDevice:(NSString *)arg2;
- (void)rapportClient:(IDSRapportClient *)arg1 didDiscoverDevice:(NSString *)arg2;
@end

