//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMURLSession, NSString, NSURLRequest;
@protocol OS_xpc_object;

@interface IMRemoteURLConnection : NSObject
{
    _Bool _requireIDSHost;	// 8 = 0x8
    _Bool _forceCellularIfPossible;	// 9 = 0x9
    _Bool _shouldUsePipelining;	// 10 = 0xa
    _Bool _disableKeepAlive;	// 11 = 0xb
    _Bool _shouldReturnTimingData;	// 12 = 0xc
    _Bool _cancelled;	// 13 = 0xd
    _Bool _loading;	// 14 = 0xe
    int _concurrentConnections;	// 16 = 0x10
    int _keepAliveWifi;	// 20 = 0x14
    int _keepAliveCell;	// 24 = 0x18
    int _retries;	// 28 = 0x1c
    NSString *_bundleIdentifierForDataUsage;	// 32 = 0x20
    NSURLRequest *_request;	// 40 = 0x28
    CDUnknownBlockType _block;	// 48 = 0x30
    NSObject<OS_xpc_object> *_connection;	// 56 = 0x38
    IMURLSession *_URLSession;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003d6eb
@property(retain, nonatomic) IMURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(nonatomic) int retries; // @synthesize retries=_retries;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain) NSURLRequest *request; // @synthesize request=_request;
@property _Bool shouldReturnTimingData; // @synthesize shouldReturnTimingData=_shouldReturnTimingData;
@property int keepAliveCell; // @synthesize keepAliveCell=_keepAliveCell;
@property int keepAliveWifi; // @synthesize keepAliveWifi=_keepAliveWifi;
@property _Bool disableKeepAlive; // @synthesize disableKeepAlive=_disableKeepAlive;
@property int concurrentConnections; // @synthesize concurrentConnections=_concurrentConnections;
@property _Bool shouldUsePipelining; // @synthesize shouldUsePipelining=_shouldUsePipelining;
@property(retain) NSString *bundleIdentifierForDataUsage; // @synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage;
@property _Bool forceCellularIfPossible; // @synthesize forceCellularIfPossible=_forceCellularIfPossible;
@property _Bool requireIDSHost; // @synthesize requireIDSHost=_requireIDSHost;
- (void)cancel;	// IMP=0x000000000003d4a5
- (void)load;	// IMP=0x000000000003d452
- (void)dealloc;	// IMP=0x000000000003d378
- (id)initWithURLRequest:(id)arg1 completionBlockWithTimingData:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d233
- (id)initWithURLRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003d186
- (void)_xpc_load;	// IMP=0x000000000003da35
- (_Bool)_xpc_connect;	// IMP=0x000000000003d89a
- (_Bool)_xpc_disconnect;	// IMP=0x000000000003d7e6
- (void)_xpc_disconnected;	// IMP=0x000000000003d734
- (void)_direct_load;	// IMP=0x000000000003e528
- (void)_direct_cancel;	// IMP=0x000000000003e50e

@end
