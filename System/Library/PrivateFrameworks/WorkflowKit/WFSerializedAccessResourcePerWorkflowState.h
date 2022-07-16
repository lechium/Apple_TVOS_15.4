//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface WFSerializedAccessResourcePerWorkflowState : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000025df64
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x000000000025dec3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025dd79
- (long long)compare:(id)arg1;	// IMP=0x000000000025dcae
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000025db08
- (id)initWithIdentifier:(id)arg1 data:(id)arg2;	// IMP=0x000000000025d955

@end

