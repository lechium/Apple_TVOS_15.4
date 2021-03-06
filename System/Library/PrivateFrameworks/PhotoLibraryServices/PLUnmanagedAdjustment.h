//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSNumber, NSString, PLAdditionalAssetAttributes;

@interface PLUnmanagedAdjustment
{
}

+ (id)copyUnmanagedAdjustmentFromSourceAsset:(id)arg1 forPlaceholderAsset:(id)arg2 inLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000303a39
+ (id)_convertRedEyeCorrection:(id)arg1 withOrientation:(long long)arg2;	// IMP=0x00000000003038aa
+ (id)_convertRedEyeCorrections:(id)arg1 withOrientation:(long long)arg2;	// IMP=0x000000000030369e
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1;	// IMP=0x0000000000303696
+ (id)entityName;	// IMP=0x0000000000303689
- (void)willSave;	// IMP=0x00000000003034a6
- (void)awakeFromInsert;	// IMP=0x0000000000303431
- (_Bool)isSyncableChange;	// IMP=0x000000000030334e
- (_Bool)supportsCloudUpload;	// IMP=0x000000000030330a
- (id)payloadForChangedKeys:(id)arg1;	// IMP=0x000000000044cfa6
- (id)payloadID;	// IMP=0x000000000044cefb

// Remaining properties
@property(retain, nonatomic) NSNumber *adjustmentBaseImageFormat; // @dynamic adjustmentBaseImageFormat;
@property(retain, nonatomic) NSString *adjustmentFormatIdentifier; // @dynamic adjustmentFormatIdentifier;
@property(retain, nonatomic) NSString *adjustmentFormatVersion; // @dynamic adjustmentFormatVersion;
@property(nonatomic) unsigned int adjustmentRenderTypes; // @dynamic adjustmentRenderTypes;
@property(retain, nonatomic) NSDate *adjustmentTimestamp; // @dynamic adjustmentTimestamp;
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) NSString *editorLocalizedName; // @dynamic editorLocalizedName;
@property(retain, nonatomic) NSString *otherAdjustmentsFingerprint; // @dynamic otherAdjustmentsFingerprint;
@property(retain, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint; // @dynamic similarToOriginalAdjustmentsFingerprint;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

