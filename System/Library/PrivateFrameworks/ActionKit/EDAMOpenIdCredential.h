//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface EDAMOpenIdCredential
{
    NSString *_tokenPayload;	// 8 = 0x8
    NSNumber *_serviceProvider;	// 16 = 0x10
}

+ (id)structFields;	// IMP=0x00000000001f0d31
+ (id)structName;	// IMP=0x00000000001f0d24
- (void).cxx_destruct;	// IMP=0x00000000001f0e8f
@property(retain, nonatomic) NSNumber *serviceProvider; // @synthesize serviceProvider=_serviceProvider;
@property(retain, nonatomic) NSString *tokenPayload; // @synthesize tokenPayload=_tokenPayload;

@end

