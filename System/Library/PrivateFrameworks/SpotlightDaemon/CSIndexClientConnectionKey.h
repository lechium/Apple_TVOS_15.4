//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/NSCopying-Protocol.h>

@protocol OS_xpc_object;

@interface CSIndexClientConnectionKey : NSObject <NSCopying>
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
}

+ (id)keyWithConnection:(id)arg1;	// IMP=0x00000000000408a6
- (void).cxx_destruct;	// IMP=0x0000000000040a3d
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (unsigned long long)hash;	// IMP=0x0000000000040a25
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040969
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004095e
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000000408f3

@end

