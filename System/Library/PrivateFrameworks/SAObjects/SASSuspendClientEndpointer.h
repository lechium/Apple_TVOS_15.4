//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface SASSuspendClientEndpointer
{
}

+ (id)suspendClientEndpointerWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000029f70
+ (id)suspendClientEndpointer;	// IMP=0x0000000000029f5e
- (_Bool)requiresResponse;	// IMP=0x0000000000029fbe
@property(copy, nonatomic) NSNumber *suspendDurationMs;
@property(copy, nonatomic) NSNumber *audioProcessedMs;
- (id)encodedClassName;	// IMP=0x0000000000029f51
- (id)groupIdentifier;	// IMP=0x0000000000029f3d

@end
