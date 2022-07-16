//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@interface TRIXPCActivityState : NSObject <NSCopying>
{
    unsigned long long _futureCompletionStatus;	// 8 = 0x8
    unsigned long long _capabilities;	// 16 = 0x10
}

+ (id)xPCActivityStateWithFutureCompletionStatus:(unsigned long long)arg1 capabilities:(unsigned long long)arg2;	// IMP=0x0000000000006583
@property(readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) unsigned long long futureCompletionStatus; // @synthesize futureCompletionStatus=_futureCompletionStatus;
- (id)init;	// IMP=0x00000000000067c0
- (id)description;	// IMP=0x000000000000671a
- (unsigned long long)hash;	// IMP=0x0000000000006702
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000669a
- (_Bool)isEqualToXPCActivityState:(id)arg1;	// IMP=0x000000000000662c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006621
- (id)copyWithReplacementCapabilities:(unsigned long long)arg1;	// IMP=0x00000000000065ec
- (id)copyWithReplacementFutureCompletionStatus:(unsigned long long)arg1;	// IMP=0x00000000000065b7
- (id)initWithFutureCompletionStatus:(unsigned long long)arg1 capabilities:(unsigned long long)arg2;	// IMP=0x000000000000653b

@end

