//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKTransitInfoPreload-Protocol.h>

@class NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface MKTransitInfoPreload : NSObject <MKTransitInfoPreload>
{
    NSAttributedString *_attributedString;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000035cde
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)initWithAttributedString:(id)arg1;	// IMP=0x0000000000035c61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

