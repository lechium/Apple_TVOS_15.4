//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface GEOAvailableExperimentBranch : NSObject
{
    NSString *_label;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_experimentIdentifier;	// 24 = 0x18
    NSMutableArray *_assignments;	// 32 = 0x20
    NSArray *_clientConfig;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000d478cd
@property(retain, nonatomic, getter=_clientConfig, setter=_setClientConfig:) NSArray *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic, getter=_dictionaryRepresentation) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSDictionary *clientConfigValues;
- (id)querySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;	// IMP=0x0000000000d46ef2
- (void)_addAssignment:(id)arg1;	// IMP=0x0000000000d46e98
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000d466f0
- (id)description;	// IMP=0x0000000000d466dc
- (id)initWithLabel:(id)arg1 name:(id)arg2 experimentIdentifier:(id)arg3;	// IMP=0x0000000000d465e7

@end

