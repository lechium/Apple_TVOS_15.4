//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface MAXpcConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSString *_connectionId;	// 16 = 0x10
}

@property(readonly, nonatomic) NSString *connectionId; // @synthesize connectionId=_connectionId;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (_Bool)notValid;	// IMP=0x00000000000197e8
- (void)dealloc;	// IMP=0x000000000001979f
- (id)initWithServiceName:(id)arg1;	// IMP=0x0000000000019709

@end
