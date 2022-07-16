//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOServer;

__attribute__((visibility("hidden")))
@interface _GEOServerProxy : NSObject
{
    Class _serverClass;	// 8 = 0x8
    GEOServer *_server;	// 16 = 0x10
}

+ (id)proxyForClass:(Class)arg1;	// IMP=0x000000000126e329
- (void).cxx_destruct;	// IMP=0x000000000126e6a5
@property(readonly, nonatomic) GEOServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) Class serverClass; // @synthesize serverClass=_serverClass;
- (id)description;	// IMP=0x000000000126e623
- (unsigned long long)hash;	// IMP=0x000000000126e60d
- (_Bool)isEqualToServerProxy:(id)arg1;	// IMP=0x000000000126e5fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000126e5a3
- (void)startServerWithDaemon:(id)arg1;	// IMP=0x000000000126e3f2
- (void)_setServer:(id)arg1 daemon:(id)arg2;	// IMP=0x000000000126e37f

@end
