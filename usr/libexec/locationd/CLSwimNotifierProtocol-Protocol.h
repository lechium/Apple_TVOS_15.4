//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@protocol CLSwimNotifierProtocol <CLNotifierServiceProtocol>
- (void)clearCalibrations;
- (void)queryUsingRecord:(struct CLSwimEntry)arg1 withReply:(void (^)(NSArray *))arg2;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end

