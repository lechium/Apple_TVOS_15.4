//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface AXSwitchRecipe : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSArray *_mappings;	// 24 = 0x18
    double _timeout;	// 32 = 0x20
    NSString *_unlocalizedName;	// 40 = 0x28
    NSString *_menuIconIdentifier;	// 48 = 0x30
}

+ (id)recipeWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000588c3
- (void).cxx_destruct;	// IMP=0x0000000000059621
@property(copy, nonatomic) NSString *menuIconIdentifier; // @synthesize menuIconIdentifier=_menuIconIdentifier;
@property(retain, nonatomic) NSString *unlocalizedName; // @synthesize unlocalizedName=_unlocalizedName;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSArray *mappings; // @synthesize mappings=_mappings;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)description;	// IMP=0x0000000000059474
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool shouldContinueScanning;
- (id)init;	// IMP=0x00000000000590eb
- (id)dictionaryRepresentation;	// IMP=0x0000000000058c70

@end

