//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MTTreatmentProfile : NSObject
{
    NSArray *_treatments;	// 8 = 0x8
}

+ (id)treatmentProfileWithConfigData:(id)arg1;	// IMP=0x000000000003b80c
- (void).cxx_destruct;	// IMP=0x000000000003bf5b
@property(retain, nonatomic) NSArray *treatments; // @synthesize treatments=_treatments;
- (id)performTreatments:(id)arg1;	// IMP=0x000000000003bd72
- (id)initWithConfigDictionary:(id)arg1;	// IMP=0x000000000003b978

@end
