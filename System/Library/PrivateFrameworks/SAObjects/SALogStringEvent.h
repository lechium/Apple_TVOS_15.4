//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SALogStringEvent
{
}

+ (id)logStringEventWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000038c74
+ (id)logStringEvent;	// IMP=0x0000000000038c62
- (_Bool)requiresResponse;	// IMP=0x0000000000038cc2
@property(copy, nonatomic) NSString *eventValue;
@property(copy, nonatomic) NSString *eventName;
- (id)encodedClassName;	// IMP=0x0000000000038c55
- (id)groupIdentifier;	// IMP=0x0000000000038c41

@end
