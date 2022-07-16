//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/GEOTransitTextDataSource-Protocol.h>

@class NSString;
@protocol GEOServerFormattedString;

@interface MKTransitText : NSObject <GEOTransitTextDataSource>
{
    id <GEOServerFormattedString> _text;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002269d0
@property(readonly, nonatomic) id <GEOServerFormattedString> text; // @synthesize text=_text;
- (id)initWithFormattedString:(id)arg1;	// IMP=0x0000000000226948

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

