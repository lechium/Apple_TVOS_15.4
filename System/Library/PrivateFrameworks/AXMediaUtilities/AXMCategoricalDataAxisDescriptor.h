//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMChartDictionaryRepresentable-Protocol.h>
#import <AXMediaUtilities/AXMDataAxisDescriptor-Protocol.h>

@class NSArray, NSAttributedString, NSString;

@interface AXMCategoricalDataAxisDescriptor : NSObject <AXMChartDictionaryRepresentable, AXMDataAxisDescriptor>
{
    NSAttributedString *_attributedTitle;	// 8 = 0x8
    NSArray *_categoryOrder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000071e90
@property(copy, nonatomic) NSArray *categoryOrder; // @synthesize categoryOrder=_categoryOrder;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentation;	// IMP=0x0000000000071cd2
- (double)normalizedAxisValueForValue:(id)arg1;	// IMP=0x0000000000071bde
- (double)upperBound;	// IMP=0x0000000000071b76
- (double)lowerBound;	// IMP=0x0000000000071b6d
@property(readonly, nonatomic) _Bool isCategoricalAxis;
@property(copy, nonatomic) NSString *title;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007198f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000071856
- (id)initWithAttributedTitle:(id)arg1 categoryOrder:(id)arg2;	// IMP=0x00000000000717bd
- (id)initWithTitle:(id)arg1 categoryOrder:(id)arg2;	// IMP=0x0000000000071724

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
