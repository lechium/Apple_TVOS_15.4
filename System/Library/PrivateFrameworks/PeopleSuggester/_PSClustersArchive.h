//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSCopying-Protocol.h>
#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary;

@interface _PSClustersArchive : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_archiveDate;	// 8 = 0x8
    NSDictionary *_clustersDictionary;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004d04e
- (void).cxx_destruct;	// IMP=0x000000000004d2fe
@property(readonly, nonatomic) NSDictionary *clustersDictionary; // @synthesize clustersDictionary=_clustersDictionary;
@property(readonly, nonatomic) NSDate *archiveDate; // @synthesize archiveDate=_archiveDate;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004d13c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004d056
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004cfb9
- (id)initWithClustersDictionary:(id)arg1 archiveDate:(id)arg2;	// IMP=0x000000000004cf20

@end

