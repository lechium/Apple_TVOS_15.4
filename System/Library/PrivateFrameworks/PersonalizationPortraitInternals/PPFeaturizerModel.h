//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/MLCustomModel-Protocol.h>

@class NSArray, NSString;

@interface PPFeaturizerModel : NSObject <MLCustomModel>
{
    NSString *_inputName;	// 8 = 0x8
    NSString *_outputName;	// 16 = 0x10
    NSString *_operation;	// 24 = 0x18
    NSArray *_param;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001622f4
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001617bf
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000161694

@end

