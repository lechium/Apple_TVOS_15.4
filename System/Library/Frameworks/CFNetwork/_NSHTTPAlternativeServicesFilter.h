//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>

@class NSString;

@interface _NSHTTPAlternativeServicesFilter : NSObject <NSCopying>
{
    NSString *_host;	// 8 = 0x8
    NSString *_partition;	// 16 = 0x10
    long long _port;	// 24 = 0x18
}

+ (id)emptyFilter;	// IMP=0x000000000007dc4b
- (void).cxx_destruct;	// IMP=0x000000000007dc23
@property(nonatomic) long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007db0b

@end

