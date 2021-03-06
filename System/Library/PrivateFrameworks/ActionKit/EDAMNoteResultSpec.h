//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface EDAMNoteResultSpec
{
    NSNumber *_includeContent;	// 8 = 0x8
    NSNumber *_includeResourcesData;	// 16 = 0x10
    NSNumber *_includeResourcesRecognition;	// 24 = 0x18
    NSNumber *_includeResourcesAlternateData;	// 32 = 0x20
    NSNumber *_includeSharedNotes;	// 40 = 0x28
    NSNumber *_includeNoteAppDataValues;	// 48 = 0x30
    NSNumber *_includeResourceAppDataValues;	// 56 = 0x38
    NSNumber *_includeAccountLimits;	// 64 = 0x40
}

+ (id)structFields;	// IMP=0x00000000001a60b7
+ (id)structName;	// IMP=0x00000000001a60aa
- (void).cxx_destruct;	// IMP=0x00000000001a6459
@property(retain, nonatomic) NSNumber *includeAccountLimits; // @synthesize includeAccountLimits=_includeAccountLimits;
@property(retain, nonatomic) NSNumber *includeResourceAppDataValues; // @synthesize includeResourceAppDataValues=_includeResourceAppDataValues;
@property(retain, nonatomic) NSNumber *includeNoteAppDataValues; // @synthesize includeNoteAppDataValues=_includeNoteAppDataValues;
@property(retain, nonatomic) NSNumber *includeSharedNotes; // @synthesize includeSharedNotes=_includeSharedNotes;
@property(retain, nonatomic) NSNumber *includeResourcesAlternateData; // @synthesize includeResourcesAlternateData=_includeResourcesAlternateData;
@property(retain, nonatomic) NSNumber *includeResourcesRecognition; // @synthesize includeResourcesRecognition=_includeResourcesRecognition;
@property(retain, nonatomic) NSNumber *includeResourcesData; // @synthesize includeResourcesData=_includeResourcesData;
@property(retain, nonatomic) NSNumber *includeContent; // @synthesize includeContent=_includeContent;

@end

