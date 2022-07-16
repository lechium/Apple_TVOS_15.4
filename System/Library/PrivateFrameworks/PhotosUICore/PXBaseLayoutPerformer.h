//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXLayoutPerformer-Protocol.h>

@class NSArray, PXLayoutPerformerOutput;

@interface PXBaseLayoutPerformer : NSObject <PXLayoutPerformer>
{
    NSArray *children;	// 8 = 0x8
    PXLayoutPerformerOutput *layoutOutput;	// 16 = 0x10
    CDStruct_392cfed4 layoutInput;	// 24 = 0x18
}

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_392cfed4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000121721
- (void).cxx_destruct;	// IMP=0x0000000000121ae0
@property(nonatomic) CDStruct_392cfed4 layoutInput; // @synthesize layoutInput;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput; // @synthesize layoutOutput;
@property(readonly, nonatomic) NSArray *children; // @synthesize children;
- (void)prepareForReuse;	// IMP=0x0000000000121a57
- (struct CGSize)performLayout;	// IMP=0x00000000001219b0

@end

