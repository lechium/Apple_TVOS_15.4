//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, PXSettings;

@interface PXSettingsConfiguration : NSObject <NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    PXSettings *_settings;	// 16 = 0x10
    NSDictionary *_archive;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000866b23
+ (id)configurationsFromSharableString:(id)arg1;	// IMP=0x0000000000866581
+ (id)sharableStringForConfigurations:(id)arg1;	// IMP=0x0000000000866160
- (void).cxx_destruct;	// IMP=0x000000000086612d
@property(readonly, nonatomic) NSDictionary *archive; // @synthesize archive=_archive;
@property(readonly, nonatomic) PXSettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000866002
- (id)copyWithUpdatedSettingsValues;	// IMP=0x0000000000865f78
- (id)copyWithName:(id)arg1;	// IMP=0x0000000000865ecd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000865d42
- (id)initWithName:(id)arg1 settings:(id)arg2 archive:(id)arg3;	// IMP=0x0000000000865c6a
- (id)initWithName:(id)arg1 settings:(id)arg2;	// IMP=0x0000000000865bd7
- (id)init;	// IMP=0x0000000000865b5d

@end

