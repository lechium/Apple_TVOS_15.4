//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface ICSStructuredLocation
{
}

- (_Bool)shouldObscureValue;	// IMP=0x0000000000032826
- (id)parametersToObscure;	// IMP=0x00000000000327e6
- (id)propertiesToObscure;	// IMP=0x00000000000327de
@property(retain, nonatomic) NSString *routing;
@property(retain, nonatomic) NSString *address;
@property(retain, nonatomic) NSString *displayName;
@property(retain, nonatomic) NSData *mapKitHandle;
@property(retain, nonatomic) NSString *abURLString;
@property(nonatomic) double radius;
@property(retain, nonatomic) NSString *loctype;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *fmtype;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;	// IMP=0x000000000001d25e

@end

