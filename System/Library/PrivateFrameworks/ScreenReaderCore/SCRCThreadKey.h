//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenReaderCore/NSCopying-Protocol.h>

@class NSString;

@interface SCRCThreadKey : NSObject <NSCopying>
{
    unsigned long long _threadID;	// 8 = 0x8
    NSString *_threadDescription;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x00000000000294ea
- (void).cxx_destruct;	// IMP=0x0000000000029ad1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029a9e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029997
- (unsigned long long)hash;	// IMP=0x000000000002998d
- (id)description;	// IMP=0x00000000000298e0
@property(readonly, nonatomic) NSString *threadDescription; // @dynamic threadDescription;
@property(readonly, nonatomic) unsigned long long threadID; // @dynamic threadID;
- (void)dealloc;	// IMP=0x000000000002982c
- (id)_allCurrentThreadIDs;	// IMP=0x0000000000029746
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000296fa
- (id)initWithDescription:(id)arg1;	// IMP=0x000000000002969d
- (id)init;	// IMP=0x00000000000295d6
- (id)_initWithThreadID:(unsigned long long)arg1 description:(id)arg2;	// IMP=0x0000000000029522

@end

