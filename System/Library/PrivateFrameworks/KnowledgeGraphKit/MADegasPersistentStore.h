//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KnowledgeGraphKit/MAPersistentStoreProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSURL, NSUUID;

@interface MADegasPersistentStore : NSObject <MAPersistentStoreProtocol>
{
    void *_database;	// 8 = 0x8
    unsigned long long _batchCounter;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    unsigned long long _transactionCounter;	// 32 = 0x20
    NSURL *_fileURL;	// 40 = 0x28
    NSMutableDictionary *_degasLabelByLabelName;	// 48 = 0x30
    NSMutableDictionary *_labelNameByDegasLabel;	// 56 = 0x38
    NSMutableDictionary *_degasLabelByDomain;	// 64 = 0x40
    NSMutableDictionary *_domainByDegasLabel;	// 72 = 0x48
    NSMutableDictionary *_attrIdByPropertyName;	// 80 = 0x50
    NSMutableDictionary *_propertyNameByAttrId;	// 88 = 0x58
}

+ (void)performBitmapTest;	// IMP=0x00000000000c1968
+ (_Bool)deleteClosedSqliteFilesAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c179c
+ (_Bool)destroyAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c163e
+ (_Bool)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c145e
+ (_Bool)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c1204
+ (id)errorForKGDBReturnCode:(int)arg1 description:(id)arg2;	// IMP=0x00000000000c118a
+ (id)persistentStoreFileExtension;	// IMP=0x00000000000c116b
+ (void)initialize;	// IMP=0x00000000000c104b
- (void).cxx_destruct;	// IMP=0x00000000000c0540
@property(retain, nonatomic) NSMutableDictionary *propertyNameByAttrId; // @synthesize propertyNameByAttrId=_propertyNameByAttrId;
@property(retain, nonatomic) NSMutableDictionary *attrIdByPropertyName; // @synthesize attrIdByPropertyName=_attrIdByPropertyName;
@property(retain, nonatomic) NSMutableDictionary *domainByDegasLabel; // @synthesize domainByDegasLabel=_domainByDegasLabel;
@property(retain, nonatomic) NSMutableDictionary *degasLabelByDomain; // @synthesize degasLabelByDomain=_degasLabelByDomain;
@property(retain, nonatomic) NSMutableDictionary *labelNameByDegasLabel; // @synthesize labelNameByDegasLabel=_labelNameByDegasLabel;
@property(retain, nonatomic) NSMutableDictionary *degasLabelByLabelName; // @synthesize degasLabelByLabelName=_degasLabelByLabelName;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (_Bool)copyToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c0304
- (_Bool)migrateToURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c0097
- (void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(unsigned long long)arg2;	// IMP=0x00000000000bfffd
- (void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(unsigned long long)arg2;	// IMP=0x00000000000bff63
- (void)removeModelEdgesPropertiesForIdentifiers:(id)arg1;	// IMP=0x00000000000bfdcb
- (void)removeModelEdgePropertiesForIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000bfcf1
- (void)removeModelNodesPropertiesForIdentifiers:(id)arg1;	// IMP=0x00000000000bfb59
- (void)removeModelNodePropertiesForIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000bfa7f
- (void)setEdgeWeight:(float)arg1 forIdentifier:(unsigned long long)arg2;	// IMP=0x00000000000bfa28
- (void)setNodeWeight:(float)arg1 forIdentifier:(unsigned long long)arg2;	// IMP=0x00000000000bf9d1
- (void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(unsigned long long)arg3;	// IMP=0x00000000000bf924
- (void)_setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(unsigned long long)arg3;	// IMP=0x00000000000bf6e5
- (void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(unsigned long long)arg3;	// IMP=0x00000000000bf638
- (void)_setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(unsigned long long)arg3;	// IMP=0x00000000000bf3f9
- (void)setModelEdgeProperties:(id)arg1 forIdentifier:(unsigned long long)arg2 clobberExisting:(_Bool)arg3;	// IMP=0x00000000000bf0b9
- (void)setModelNodeProperties:(id)arg1 forIdentifier:(unsigned long long)arg2 clobberExisting:(_Bool)arg3;	// IMP=0x00000000000bed79
- (void)_enumeratePropertiesForCursor:(void *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bebcd
- (void)_enumerateEdgeTableWithEdgeCursor:(void *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bea47
- (void)_enumerateEdgesWithEdgeCursor:(void *)arg1 propertiesCursor:(void *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000be81a
- (struct AttributeValueCursor)edgeAttributeValueCursorWithIdentifiers:(id)arg1;	// IMP=0x00000000000be75b
- (struct EdgeCursor)edgeCursorWithIdentifiers:(id)arg1;	// IMP=0x00000000000be69c
- (void)enumerateEdgesWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000be5bf
- (void)_enumerateNodeTableWithNodeCursor:(void *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000be47c
- (void)_enumerateNodesWithNodeCursor:(void *)arg1 propertiesCursor:(void *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000be24f
- (struct AttributeValueCursor)nodeAttributeValueCursorWithIdentifiers:(id)arg1;	// IMP=0x00000000000be190
- (struct NodeCursor)nodeCursorWithIdentifiers:(id)arg1;	// IMP=0x00000000000be0d1
- (void)enumerateNodesWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bdff4
- (id)propertyValueForCursor:(void *)arg1;	// IMP=0x00000000000bde4f
- (void)removeModelEdgesForIdentifiers:(id)arg1;	// IMP=0x00000000000bdc48
- (void)removeModelEdgeForIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000bdbfc
- (void)addEdge:(id)arg1 requiresTesting:(_Bool)arg2;	// IMP=0x00000000000bd777
- (void)removeModelNodesForIdentifiers:(id)arg1;	// IMP=0x00000000000bd570
- (void)removeModelNodeForIdentifier:(unsigned long long)arg1;	// IMP=0x00000000000bd526
- (void)addNode:(id)arg1 requiresTesting:(_Bool)arg2;	// IMP=0x00000000000bd1c4
- (void)enumerateModelEdgesForLabels:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bcf1d
- (void)enumerateModelEdgesForDomains:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bcd3d
- (void)enumerateModelEdgesForIdentifiers:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bcc6c
- (void)enumerateModelEdgesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bcc03
- (void)enumerateModelNodesForLabels:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc95c
- (void)enumerateModelNodesForDomains:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc77c
- (void)enumerateModelNodesForIdentifiers:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bc6ab
- (void)enumerateModelNodesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bc642
- (id)returnLabelAndDomain:(short *)arg1 forDegasLabels:(void *)arg2;	// IMP=0x00000000000bc408
- (id)propertyNameForAttrId:(unsigned long long)arg1;	// IMP=0x00000000000bc38d
- (unsigned long long)attrIdForPropertyName:(id)arg1 sampleValue:(id)arg2;	// IMP=0x00000000000bc088
- (short)matisseDomainForDegasLabel:(unsigned long long)arg1;	// IMP=0x00000000000bbfed
- (unsigned long long)degasLabelIdForLabelName:(id)arg1;	// IMP=0x00000000000bbe69
- (id)labelforDegasLabelId:(unsigned long long)arg1;	// IMP=0x00000000000bbe57
- (unsigned long long)degasLabelIdForMatisseDomain:(unsigned short)arg1;	// IMP=0x00000000000bbc42
- (void)loadPropertyNames;	// IMP=0x00000000000bba6c
- (void)loadLabelsAndDomains;	// IMP=0x00000000000bb756
- (id)localLabelNameForDegasLabel:(unsigned long long)arg1;	// IMP=0x00000000000bb6db
- (void)setLabel:(id)arg1 forDegasLabel:(unsigned long long)arg2;	// IMP=0x00000000000bb643
@property(nonatomic) unsigned long long graphVersion;
@property(readonly, nonatomic) NSUUID *graphIdentifier;
@property(readonly, nonatomic) _Bool doesCascadeEdgeDelete;
- (void)leaveBatch;	// IMP=0x00000000000bb39c
- (void)enterBatch;	// IMP=0x00000000000bb366
- (void)closePersistentStore;	// IMP=0x00000000000bb2e6
- (void)leaveTransactionWithRollback;	// IMP=0x00000000000bb27a
- (void)leaveTransaction;	// IMP=0x00000000000bb25b
- (void)beginTransactionIfNeeded;	// IMP=0x00000000000bb23c
- (void)checkTransaction;	// IMP=0x00000000000bb1cf
- (void)invalidateMemoryCaches;	// IMP=0x00000000000bb19b
- (void)invalidatePersistentStores;	// IMP=0x00000000000bb0d0
- (void)removePreviousPersistenceStore;	// IMP=0x00000000000bacda
- (void)save:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bac83
- (id)initWithFileURL:(id)arg1 options:(long long)arg2;	// IMP=0x00000000000baa07
- (void)dealloc;	// IMP=0x00000000000ba93d
- (void *)database;	// IMP=0x00000000000c1972

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

