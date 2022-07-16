//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardParameterLine-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface CNVCardLine : NSObject <CNVCardParameterLine>
{
    NSString *_name;	// 8 = 0x8
    id _value;	// 16 = 0x10
    NSMutableArray *_parameters;	// 24 = 0x18
    NSString *_grouping;	// 32 = 0x20
    NSMutableArray *_groupedLines;	// 40 = 0x28
    NSString *_itemSeparator;	// 48 = 0x30
}

+ (id)versionPlaceholderLine;	// IMP=0x000000000001924f
+ (id)lineWithLiteralValue:(id)arg1;	// IMP=0x0000000000019236
+ (id)lineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;	// IMP=0x00000000000191a8
+ (id)lineWithName:(id)arg1 value:(id)arg2;	// IMP=0x0000000000019193
- (void).cxx_destruct;	// IMP=0x00000000000197a2
@property(readonly) NSString *itemSeparator; // @synthesize itemSeparator=_itemSeparator;
@property(readonly) NSArray *groupedLines; // @synthesize groupedLines=_groupedLines;
@property(readonly) NSString *groupingName; // @synthesize groupingName=_grouping;
@property(readonly) NSArray *parameters; // @synthesize parameters=_parameters;
@property(readonly) id value; // @synthesize value=_value;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)serializeValueWithStrategy:(id)arg1;	// IMP=0x000000000001959b
- (void)serializeWithStrategy:(id)arg1;	// IMP=0x0000000000019580
- (_Bool)canSerializeWithStrategy:(id)arg1;	// IMP=0x00000000000194c0
- (id)makeGroupingNameWithCounter:(long long *)arg1;	// IMP=0x0000000000019495
- (void)addGroupedLine:(id)arg1 withCounter:(long long *)arg2;	// IMP=0x000000000001941d
- (void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000193c4
- (void)addParameterWithName:(id)arg1 value:(id)arg2;	// IMP=0x0000000000019370
- (id)initWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;	// IMP=0x0000000000019268

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

