//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol SAHandoffPayload;

@interface SASetHandoffPayload
{
}

+ (id)setHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002129b
+ (id)setHandoffPayload;	// IMP=0x0000000000021289
- (_Bool)requiresResponse;	// IMP=0x00000000000212c7
@property(retain, nonatomic) id <SAHandoffPayload> handoffPayload;
- (id)encodedClassName;	// IMP=0x000000000002127c
- (id)groupIdentifier;	// IMP=0x0000000000021268

@end

