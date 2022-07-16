//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/CLLocationSmootherClientInterface-Protocol.h>

@class CLLocationSmoother, NSString, NSXPCConnection;
@protocol CLLocationSmootherDelegate, OS_dispatch_queue;

@interface _CLLocationSmootherProxy : NSObject <CLLocationSmootherClientInterface>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    id <CLLocationSmootherDelegate> _delegate;	// 24 = 0x18
    CLLocationSmoother *_locationManagerSmoother;	// 32 = 0x20
}

@property(nonatomic) CLLocationSmoother *locationManagerSmoother; // @synthesize locationManagerSmoother=_locationManagerSmoother;
@property(nonatomic) id <CLLocationSmootherDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)createConnection;	// IMP=0x000000000002bdfb
- (void)didSmoothLocations:(id)arg1 ofType:(id)arg2;	// IMP=0x000000000002bd36
- (void)dealloc;	// IMP=0x000000000002bca7
- (id)initWithCLLocationSmoother:(id)arg1;	// IMP=0x000000000002bb9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

