//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@class CLLocation;

@protocol CLLocationCorrectiveCompensatorProtocol <CLIntersiloServiceProtocol>
- (void)snapLocation:(CLLocation *)arg1 withReply:(void (^)(CLLocation *, _Bool, NSData *))arg2;
@end

