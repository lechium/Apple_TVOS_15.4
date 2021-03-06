//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOVenueLabel-Protocol.h>

@class NSString;

@interface GEOVenueLabel : NSObject <GEOVenueLabel>
{
    NSString *_name;	// 8 = 0x8
    NSString *_shortName;	// 16 = 0x10
    NSString *_detail;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000011cdfb8
@property(readonly, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000011cdeb9
- (id)initWithName:(id)arg1;	// IMP=0x00000000011cdea2
- (id)initWithName:(id)arg1 shortName:(id)arg2 detail:(id)arg3;	// IMP=0x00000000011cddeb
- (id)init;	// IMP=0x00000000011cddc1

@end

